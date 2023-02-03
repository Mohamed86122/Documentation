	int n ,i,j;
	
	printf("donnez dimension du tableau ");
	scanf("%d",&n);
	
	int T[n];
	//Insertion du tableau
	for(i=0;i<n;i++)
	{
		printf("T[%d]",i);
		scanf("%d",&T[i]);
	}
	
	
	//tri par selection 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(T[i]>=T[j])
			{
				int cp ; 
				
				cp = T[i];
				T[i]=T[j];
				T[j]=cp;
				
				
				
			}
		}
	}
	
	//tri par bulle
	 int i,j,c;

	for(j=1;j<=N;j++) 
	{
    	for(i=0;i<N-1;i++)
    	{
    		if ( T[i] > T[i+1] ) 
			{
	                c = T[i];
	                T[i] = T[i+1];
	                T[i+1] = c;
	        } 
    		
		}
         
	}
	//tri par insertion
	
	for (i=1 ; i <= SIZE-1; i++) 
	{
    	j = i;
 
	    while (j > 0 && tab[j-1] > tab[j]) 
		{
		      tmp = tab[j];
		      tab[j] = tab[j-1];
		      tab[j-1] = tmp;
		 
		      j--;
	    }
  }
	//tri par permutation
	

	for(i=1;i<N;i++) 
	{

	    if ( T[i] < T[i-1] ) 
		{ // si l’élément est mal placé
	        j = 0;
	        while ( T[j] < T[i] ) 
			{
				j++;
			} // cette boucle sort par j = la nouvelle position de l’élément
	 
	 		c = T[i]; // ces 2 lignes servent a translater les cases en avant pour pouvoir insérer l’élément a sa nouvelle position
	        for( k = i-1 ; k >= j ; k-- ) 
			{
				T[k+1] = T[k];
			}
	 		T[j] = c; // l'insertion
	    }
	}
	//Affichage
	for(i=0;i<n;i++)
	{
		printf("%d",T[i]);
		
	}
