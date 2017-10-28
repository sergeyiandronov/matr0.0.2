#include <iostream>
#include <sstream>
using namespace std;


void create_matrix(unsigned int columns,
                   unsigned int rows,
                   float **&matrix)
{
	matrix = new float *[ rows];
    for( unsigned int i = 0; i < rows; ++i ) {
        matrix[ i ] = new float[ columns];
        for(unsigned int j = 0; j < columns; ++j ) {
               matrix[ i ][ j ] = 0.0f;
        }
    }
    
}
	

float det(unsigned int columns,
          unsigned int rows,
          float **matrix)
{
	if(columns!=rows)
	{
		return 0;
	}
	float result;
      
    if(columns==1)
    {
    	result=matrix[0][0];
    	
    }
	else if(columns==2)
	{
        result=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];			
	}
	else
	{
		for(unsigned int j=0;j<columns;j++){
			float **minor;
			ctreate_matrix(columns-1,rows-1,minor);
			for(unsigned int y = 0; y < Mat.Row-1; ++y )
			{
				int k=0;
                for(unsigned int x = 0; x < columns-1; ++x ) 
                {
                    if(x==j){
                    	k=1;
                    }
                    minor[y][x]=matrix[y+1][x+k];
                }
				
			}
            switch(j%2){
                case 0:
                   result+=matrix[0][j]*det(minor);
                   break;
                case 1:
                   result+=(-matrix[0][j])*det(minor);
                   break;
            }      
                                  
		}
	}
	return result;
}
float **algedraic_matrix(float **matrix;
	                     unsigned int columns,
                         unsigned int rows)
{
	float** result;
	result=create_matrix(columns,rows);
		for(unsigned int j=0;j<rows;j++){
		    for(unsigned int i=0;i<columns;i++){
		    minor=create_matrix(columns-1,rows-1);
			int k1=0;
			for(unsigned int y = 0; y < rows-1; ++y ) 
			{
				int k=0;
                for(unsigned int x = 0; x < columns-1; ++x )
                {
                    if(x==i)
                    {
                    	k=1;
                    }
                    if(y==j)
                    {
                    	k1=1;
                    }
                        
                    matrix[y][x]=matrix[y+k1][x+k];
                }
			}
            switch((j+i)%2){
                case 0:
                   result[j][i]=det(minor); 
                   break;
                case 1:
                   result[j][i]=(-det(minor));
                   break;
            }      
		}
	}
	return result;
}
float **sum(float **matrix1,
            unsigned int columns1,
            unsigned int rows1,
            float **matrix2,
            unsigned int columns2,
            unsigned int rows2)
{
	float **result;
	if(columns1!=columns2||rows1!=rows2)
	{
		stream.setstate(std::ios::failbit);
		return result;
		
	}
	result=create_matrix(columns1,rows1);
    for(unsigned int j=0;j<rows;j++){
     	for(unsigned int i=0;i<columns;i++){
     			result[j][i]=matrix1[j][i]+matrix2[j][i];
     	}
    } 
    return result;
   
}
float **sub(float **matrix1,
            unsigned int columns1,
            unsigned int rows1,
            float **matrix2,
            unsigned int columns2,
            unsigned int rows2)
{
	float **result;
	if(columns1!=columns2||rows1!=rows2)
	{
		stream.setstate(std::ios::failbit);
		return result;
		
	}
	result=create_matrix(columns1,rows1);
    for(unsigned int j=0;j<rows;j++){
     	for(unsigned int i=0;i<columns;i++){
     			result[j][i]=matrix1[j][i]+matrix2[j][i];
     	}
    } 
    return result;
   
}
float **mul(float **matrix1,
            unsigned int columns1,
            unsigned int rows1,
            float **matrix2,
            unsigned int columns2,
            unsigned int rows2)
{
    float **result;
    if(columns1!=rows2)
    {
	      stream.setstate(std::ios::failbit);
	      return result;
    }
    result=create_matrix(columns2,rows1);
    for(unsigned int j=0;j<rows1;j++)
    {
          for(unsigned int i=0;i<columns2;i++)
          {
     			float y=0;
     			for(unsigned int z=0;z<columns1;z++)
     			{
     			    y+=matrix1[j][z]*matrix2[z][i];	
     			}
     			result[j][i]=y;
          }
	} 
    return result;    
}
float **transplate(float **matrix,
                   unsigned int columns,
                   unsigned int rows)
{
     float **result;
     result=create_matrix(rows,columns);
     
     for(unsigned int j=0;j<columns;j++)
     {
     		for(unsigned int i=0;i<rows;i++)
     		{
     			result[j][i]=matrix[i][j];
     		}
     } 
     
     return result;
}
float **reverse(float **matrix,
                unsigned int columns,
                unsigned int rows)
     float **result;
     if (det(matrix)==0)
     {
     	stream.setstate(std::ios::failbit);
     	return result;
     }	
     result=create_matrix(columns,rows);
     float **a=algebraic_matrix(matrix,columns,rows);
     a=transplate(a);
     for(unsigned int j=0;j<columns;j++)
     {
     		    for(unsigned int i=0;i<row;i++)
     		    {
     			    result[j][i]=a[j][i]*(1/(det(matrix)));
     		    }
     } 
     
     return result;
}
bool get_matrix(float **&matrix,
               unsigned int ncolumns,
               unsigned int nrows)
{


   for(unsigned int j=0;j<nrows;j++)
   {
           string new_row;	
	       getline(cin,new_row);
	       istringstream stream(new_row);
	       for(unsigned int i=0;i<ncolumns;i++)
	       {
	       	  if(!(stream>>matrix[j][i]))
	       	  {
	       		     return false;
	       	  }
	       }
	}
	return true;
	
}

void cout_matrix(float **matrix,
                 unsigned int ncolumns,
                 unsigned int nrows)
{

	for(unsigned int j=0;j<nrows;j++)
	{
	       for(unsigned int i=0;i<ncolumns;i++)
	       {
	       	   if(Matsign.Matrix[j][i]==-0)
	       	   {
	       		matrix[j][i]=0;
	       	   }  
	       	   cout<<matrix[j][i]<<"\t";
	       }
	cout<<"\n";
	}
}
bool get_size(unsigned int &columns,
              unsigned int &rows)
{
     string header;

     char razdel;
     getline(cin,header);
     istringstream str(header);
     if((str>>*rows)&&(str>>razdel)&&(str>>*columns)&&(razdel==','))
     {
     	return true;
     }
     return false;
}
int main()
{
int a,b

}
