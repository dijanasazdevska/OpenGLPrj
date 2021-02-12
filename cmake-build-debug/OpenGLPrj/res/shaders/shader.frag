#version 330 core
out vec4 FragColor;
in vec2 TexCoord;
uniform bool isBrick;
uniform bool isTreasure;
uniform sampler2D texture1;
uniform sampler2D texture2;
void main()
{
    if(isTreasure){
        FragColor=vec4(1.0f,1.0f,0.0f,1.0f);

    }
    else if(isBrick){
        FragColor =texture(texture1,TexCoord);

    }
    else{
        FragColor =texture(texture2,TexCoord);

    }
}
