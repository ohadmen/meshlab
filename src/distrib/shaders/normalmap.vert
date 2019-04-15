varying vec4 baseColor;
void main(void)
{
    gl_Position = ftransform();
    baseColor = vec4((1.0-gl_Normal)*0.5, 1.0);
}