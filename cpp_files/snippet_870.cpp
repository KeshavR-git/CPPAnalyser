void Capitalise(char *phrase)
{
int l = strlen(phrase);
int bye = 0;
int q = phrase[bye];

if ((q>96)&& (q<123)){
phrase[bye] = q-32;
}

for (bye= 0; bye<l; bye++){

q = phrase[bye];
int la = phrase [bye+1];

if ((q ==32) && (la>96) && (la<123))
{
phrase[bye+1]= phrase[bye+1]-32;
}
}

}