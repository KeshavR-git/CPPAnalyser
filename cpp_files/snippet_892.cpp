void
Capitalise (char *phrase)
{

  int ppp = 0;

  while (phrase[ppp] != '\0')
    {

      ppp = ppp + 1;
    }


int qqq;
  for ( qqq = 0; qqq <= ppp - 1; qqq++)
    {


 if (((phrase[qqq] >= 'a') && (phrase[qqq] <= 'z'))
	  && (phrase[qqq - 1] == ' '))
	{

	  phrase[qqq] = phrase[qqq] - ' ';

	}

      if ((phrase[0] >= 'a') && (phrase[0] <= 'z'))
	{

	  phrase[0] = (phrase[0] - ('a' - 'A'));

	}
     
    }
}