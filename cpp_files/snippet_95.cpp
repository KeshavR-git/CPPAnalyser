void
Capitalise (char *phrase)
{

  int p = 0;

  while (phrase[p] != '\0')
    {

      p = p + 1;
    }


int q;
  for ( q = 0; q <= p - 1; q++)
    {


 if (((phrase[q] >= 'a') && (phrase[q] <= 'z'))
	  && (phrase[q - 1] == ' '))
	{

	  phrase[q] = phrase[q] - ' ';

	}

      if ((phrase[0] >= 'a') && (phrase[0] <= 'z'))
	{

	  phrase[0] = (phrase[0] - ('a' - 'A'));

	}
     
    }
}