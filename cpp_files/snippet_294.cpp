int Helper(char character){
if (character > 96 && character <123){
character = character - 32;
return character;
}
return character;
}

void Capitalise(char *phrase)
{
int length = strlen(phrase);

phrase[0] = Helper(phrase[0]);
for (int i = 1; i<length; i++){
if (phrase[i-1]==' '){
phrase[i] = Helper(phrase[i]);
}
}
}