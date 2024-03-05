void Capitalise(char* phrase)
{
int length = strlen(phrase);
int z = 0;

int a = phrase[z];
if((a > 96) && (a < 123))
{
    phrase[z] = a - 32;
}

for(z = 0; z < length; z++) {
    
    a = phrase[z];
    int b = phrase[z+1];
    
    if((a == 32) && (b > 96) && (b < 123))
    {
        phrase[z+1] = phrase[z+1] - 32;
    }
}
}