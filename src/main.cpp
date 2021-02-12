#include <OpenGLPrj.hpp>
#include "Brick.hpp"

#include <GLFW/glfw3.h>

#include <Camera.hpp>
#include <Shader.hpp>

#include <iostream>
#include <vector>
#include <Scene.hpp>
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

float vertices[] = {
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
        0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
        0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
        0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
        0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
        -0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

        -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

        0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
        0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
        0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
        0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f
};




glm::vec4 backgroundColor= glm::vec4(0.0f, 0.5, 0.5, 0.0f);
glm::vec3 brickPositions[] = {
        glm::vec3(0.0f,0.0f,0.0f),
        glm::vec3(0.0f,1.0f,0.0f),
        glm::vec3(0.0f,2.0f,0.0f),
        glm::vec3(-1.0f,2.0f,0.0f),
        glm::vec3(-2.0f,2.0f,0.0f),
        glm::vec3(-2.0f,1.0f,0.0f),
        glm::vec3(-2.0f,0.0f,0.0f),
        glm::vec3(-2.0f,-1.0f,0.0f),
        glm::vec3(-3.0f,-1.0f,0.0f),
        glm::vec3(-4.0f,-1.0f,0.0f),
        glm::vec3(-4.0f,-2.0f,0.0f),
        glm::vec3(-4.0f,-3.0f,0.0f),
        glm::vec3(-3.0f,-3.0f,0.0f),
        glm::vec3(-2.0f,-3.0f,0.0f),
        glm::vec3(-1.0,-3.0f,0.0f),
        glm::vec3(-1.0f,-4.0f,0.0f),
        glm::vec3(-1.0f,-5.0f,0.0f),
        glm::vec3(0.0f,-5.0f,0.0f),
        glm::vec3(1.0f,-5.0f,0.0f),
        glm::vec3(1.0f,-4.0f,0.0f),
        glm::vec3(1.0f,-3.0f,0.0f),
        glm::vec3(1.0f,-2.0f,0.0f),
        glm::vec3(2.0f,-2.0f,0.0f),
        glm::vec3(3.0,-2.0f,0.0f),
        glm::vec3(3.0f,-1.0f,0.0f),
        glm::vec3(3.0f,0.0f,0.0f),
        glm::vec3(2.0f,0.0f,0.0f),
        glm::vec3(1.0f,0.0f,0.0f)





};
Scene* scene=new Scene();
// timing

float deltaTime = 0.0f;	// time between current frame and last frame
float lastFrame = 0.0f;

int main(int argc, char * argv[]) {
    // Load GLFW and Create a Window
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    auto mWindow = glfwCreateWindow(mWidth, mHeight, "BoxWorld", nullptr, nullptr);

    // Check for Valid Context
    if (mWindow == nullptr) {
        fprintf(stderr, "Failed to Create OpenGL Context");
        return EXIT_FAILURE;
    }

    // Create Context and Load OpenGL Functions
    glfwMakeContextCurrent(mWindow);
    glfwSetFramebufferSizeCallback(mWindow,framebuffer_size_callback);
    gladLoadGL();
    Shader brickShader("../res/shaders/shader.vert","../res/shaders/shader.frag");

    // set up vertex data (and buffer(s)) and configure vertex attributes
    // ------------------------------------------------------------------

    unsigned int VBO, VAO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    // bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


//    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,EBO);
//    glBufferData(GL_ELEMENT_ARRAY_BUFFER,  sizeof(indices), indices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1,2,GL_FLOAT,GL_FALSE,5*sizeof(float),(void*)(3*sizeof(float)));
    glEnableVertexAttribArray(1);




    // note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    // remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
    //glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    // You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
    // VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
    glBindVertexArray(0);


//    // position attribute
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
//    glEnableVertexAttribArray(0);
//
////texture attribute
//    glVertexAttribPointer(1,2,GL_FLOAT,GL_FALSE,5*sizeof(float),(void*)(3*sizeof(float)));
//    glEnableVertexAttribArray(1);
//    glEnableVertexAttribArray(0);
//
//
    // load and create a texture
    // -------------------------
    unsigned int texture1,texture2;
    glGenTextures(1, &texture1);
    glBindTexture(GL_TEXTURE_2D, texture1); // all upcoming GL_TEXTURE_2D operations now have effect on this texture object
    // set the texture wrapping parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set texture filtering parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load image, create texture and generate mipmaps


    int width, height, nrChannels;
    unsigned char* data = stbi_load("../res/textures/wall.jpg",&width,&height,&nrChannels,0);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cout << "Failed to load texture" << std::endl;
    }
    stbi_image_free(data);



    glGenTextures(1, &texture2);
    glBindTexture(GL_TEXTURE_2D, texture2); // all upcoming GL_TEXTURE_2D operations now have effect on this texture object
    // set the texture wrapping parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set texture filtering parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load image, create texture and generate mipmaps


     data = stbi_load("../res/textures/container.jpg",&width,&height,&nrChannels,0);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cout << "Failed to load texture" << std::endl;
    }
    brickShader.use();
    glUniform1i(glGetUniformLocation(brickShader.ID, "texture1"), 0);
    // or set it via the texture class
    brickShader.setInt("texture2", 1);

    stbi_image_free(data);
glEnable(GL_DEPTH_TEST);
for(int i = 0;i < sizeof(brickPositions);i++)
    scene->pushBrick( new Brick(brickPositions[i]));







    scene->pushTreasure(new Treasure(glm::vec3(2.0f,-1.0f,0.0f)));
scene->pushTreasure(new Treasure(glm::vec3(0.0f,-4.0f,0.0f)));
scene->pushTreasure(new Treasure(glm::vec3(-3.0f,-2.0f,0.0f)));
scene->pushTreasure(new Treasure(glm::vec3(-1.0f,1.0f,0.0f)));


scene->pushBox(new Box(glm::vec3(1.0f,-1.0f,0.0f)));
scene->pushBox(new Box(glm::vec3(-1.0f,-2.0f,0.0f)));
scene->pushBox(new Box(glm::vec3(0.0f,-3.0f,0.0f)));
scene->pushBox(new Box(glm::vec3(-1.0f,-1.0f,0.0f)));
// Rendering Loop
    while (glfwWindowShouldClose(mWindow) == false) {

        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        processInput(mWindow);

        // Background Fill Color
        glClearColor(backgroundColor.x,backgroundColor.y,backgroundColor.z,backgroundColor.w);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT  );
        // create transformations
        glBindVertexArray(VAO);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, texture1);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, texture2);

        // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
//        for(unsigned int i = 0; i < 10; i++)
//        {
//glm::mat4 model= glm::mat4(1.0f);
//model=glm::translate(model,cubePositions[i]);
//ourShader.setMat4("model",model);
//ourShader.use();
//glDrawArrays(GL_TRIANGLES,0,36);
//
//        }

scene->draw(brickShader,mWidth,mHeight);


        glfwSwapBuffers(mWindow);
        glfwPollEvents();
    }   glfwTerminate();
    return EXIT_SUCCESS;
}
void processInput(GLFWwindow *window) {

    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window, true);

    }

    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS ){
            scene->ProcessKeyboard(UP, deltaTime);




    }
    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS){
        scene->ProcessKeyboard(DOWN, deltaTime);

    }
    if (glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS)
    {
        scene->ProcessKeyboard(LEFT, deltaTime);

    }
    if (glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS) {
        scene->ProcessKeyboard(RIGHT, deltaTime);
    }


}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}


