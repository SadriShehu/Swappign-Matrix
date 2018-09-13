//Plotesimi i detyres
#include <iostream>
#include<time.h>
using namespace std;
int main()
{
		int p, i, j;
	int const m=3,n=3; 
	int M[m][n];
	char pergjigja;

	cout<<"Ne katrorin ABCD, i ndare ne 9 kuadrante te barabarta,\n"
		<<"si duhet te vendosen numrat nga 1-9 ne menyre qe shuma\n"
		<<"e tre numrave te katroreve ne drejtim te boshteve te\n"
		<<"simetrise te jape:\n\n";
prap:
	cout<<"(A) Numrin 12\n"
		<<"(B) Numrin 15\n"
		<<"(C) Numrin 18\n\n";
	cout<<"Per cilen vlere te numrit deshironi te plotesoni katrorin =>\n\n"
		<<"Shtypeni njeren nga vlerat e larte-shenuara: ";
	cin>>p;
	cout<<endl;

	if(p==12 || p==15 || p==18)
	{
		cout<<"Ju zgjodhet te plotesoni katrorin ne menyre qe shuma\n"
		    <<"e boshteve te simetrise te jape numrin: " << p << "\n\n";
		cout<<"Ju lutem shenoni vlerat e numrave neper katrore\n\n";

		cout<<" |-----------------|\n";
	
		cout<<" | "<<"A11"<<" | "<<"A12"<<" | "<<"A13"<<" | "<<endl;
	
		cout<<" |-----+-----+-----|\n";

		cout<<" | "<<"A21"<<" | "<<"A22"<<" | "<<"A23"<<" | "<<endl;

		cout<<" |-----+-----+-----|\n";
	
		cout<<" | "<<"A31"<<" | "<<"A32"<<" | "<<"A33"<<" | "<<endl;

		cout<<" |-----------------|\n\n";

		cout<<"\a";

		cout<<"Shtypni vlerat e anetareve sipas radhes:\n\n";

		cout<<"A11: ";
		cin>>M[0][0];
		
		cout<<"A12: ";
		cin>>M[0][1];
		
		cout<<"A13: ";
		cin>>M[0][2];
		
		cout<<"A21: ";
		cin>>M[1][0];
		
		cout<<"A22: ";
		cin>>M[1][1];
		
		cout<<"A23: ";
		cin>>M[1][2];
		
		cout<<"A31: ";
		cin>>M[2][0];
		
		cout<<"A32: ";
		cin>>M[2][1];

		cout<<"A33: ";
		cin>>M[2][2];
		cout<<endl;
		
		cout<<" |-----------|\n";
		
		cout<<" | "<<M[0][0]<<" | "<<M[0][1]<<" | "<<M[0][2]<<" | "<<endl;
	
		cout<<" |---+---+---|\n";

		cout<<" | "<<M[1][0]<<" | "<<M[1][1]<<" | "<<M[1][2]<<" | "<<endl;

		cout<<" |---+---+---|\n";
	
		cout<<" | "<<M[2][0]<<" | "<<M[2][1]<<" | "<<M[2][2]<<" | "<<endl;

		cout<<" |-----------|\n\n";

		cout<<"\a";

		
			{
				if( M[0][0]+M[1][1]+M[2][2]==p && 
					M[0][1]+M[1][1]+M[2][1]==p && 
					M[1][0]+M[1][1]+M[1][2]==p && 
					M[0][2]+M[1][1]+M[2][0]==p )
					cout<<"Ju keni bere renditjen e duhur. Bravoo!!!\n\n"
						<<"Mirepo ka edhe zgjidhje te tjera.\n\n";
				else
					cout<<"Zgjedhja juaj nuk eshte e sakte. Provoni perseri.\n\n";
			}
	}

	else
		cout<<"Ju nuk e caktuat vleren e duhur!!!\a\a\a\n\n";

perseritja:
		
	cout<<"D\x89shironi q\x89 llogaritja t\x89 p\x89rs\x89ritet "
		<<"apo qe te shfaqet zgjidhja:\n\n(p - Perserite | z - Zgjidhja | j-Perfundo) ";

	cin>>pergjigja;

	if(pergjigja=='p')
	{
		cout<<endl
			<<endl;
		goto prap;
	}

	else if(pergjigja=='z')
	{

		if(p!=12 && p!=15 && p!=18)
		{
		cout<<"\nP\x89r k\x89t\x89 vler\x89 t\x89 numrit nuk ka zgjidhje.\n\n";
		goto perseritja;
		}

		cout<<"\n\nNjera nder zgjidhjet e mundeshme te detyres eshte kombinimi:\n\n";
		int matrica[m][n]={{1,2,3},{4,5,6},{7,8,9}};

		srand(time(0));
	
fillimi:

	swap(matrica[0][0],matrica[rand()%3][rand()%3]);

    for(i=0;i<m;i++)
	{

      for(j=0;j<n;j++)
	  {

		  if(matrica[0][0]+matrica[i][j]+matrica[2][2]==p)
		swap(matrica[1][1],matrica[i][j]);
	  }
	}
	
    for(i=0;i<m;i++)
	{

      for(int j=0;j<n;j++)
	  {

		  if(!(i==2 && j==2))
		  {
			  if(!(i==1 && j==1))
			  {

				  if(!(i==0 && j==0))
				  {

					  if(matrica[i][j]+matrica[1][1]+matrica[2][1]==p)
					swap(matrica[0][1],matrica[i][j]);
				  }
		
			  }
	
		  }
	
	  }
	
	}
	
	{
	 for(i=0;i<m;i++)
	 {
		 for(int j=0;j<n;j++)
		 {
			 if(!(i==2 && j==1))
				 if(!(i==0 && j==1))
					if(!(i==2 && j==2))
					{
						  if(!(i==1 && j==1))
						  {
							  if(!(i==0 && j==0))
							  {
								  if(matrica[i][j]+matrica[1][1]+matrica[2][0]==p)
								swap(matrica[0][2],matrica[i][j]);
							  }
						  }
					}
		 }
	 }
	
	}
	
	if(!(matrica[0][0] + matrica[1][1] + matrica[2][2] ==p))
	{

		goto fillimi;
	}

	if(!(matrica[1][0] + matrica[1][1] + matrica[1][2] ==p))
	{

		goto fillimi;
	}

	if(!(matrica[0][2] + matrica[1][1] + matrica[2][0] ==p))
	{
		
		goto fillimi;
	}
	
	if(!(matrica[0][1] + matrica[1][1] + matrica[2][1] ==p))
	{
		
		goto fillimi;
	}
	
	cout<<endl;

	cout<<" |-----------|\n";
	
	cout<<" | "<<matrica[0][0]<<" | "<<matrica[0][1]<<" | "<<matrica[0][2]<<" | "<<endl;
	
	cout<<" |---+---+---|\n";

	cout<<" | "<<matrica[1][0]<<" | "<<matrica[1][1]<<" | "<<matrica[1][2]<<" | "<<endl;

	cout<<" |---+---+---|\n";
	
	cout<<" | "<<matrica[2][0]<<" | "<<matrica[2][1]<<" | "<<matrica[2][2]<<" | "<<endl;

	cout<<" |-----------|\n";

	cout<<"\a";

	cout<<"\n\n\n";
	}
		
	

		else if(pergjigja=='j')
			
			cout<<"\n\nFaleminderit!!!\n\n\n";

		else
		{
			cout<<"\nNuk caktuat vlere te njohur\n\n";
			goto perseritja;
		}

	return 0;
}
