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
float **algedraic_matrix(unsigned int columns,
                         unsigned int rows,
                         float **matrix)
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
    for(int j=0;j<rows;j++){
     	for(int i=0;i<columns;i++){
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
    
for(int j=0;j<Mat1.Row;j++)
{
    for(int i=0;i<Mat2.Column;i++)
    {
     			float y=0;
     			for(int z=0;z<Mat1.Column;z++)
     			{
     			    y+=Mat1.Matrix[j][z]*Mat2.Matrix[z][i];	
     			}
     			result.Matrix[j][i]=y;
    }
	
} 
    
}
mtrx Tr(mtrx Mat){
     mtrx result;
     result=InitZero(Mat.Row,Mat.Column);
     
     	for(int j=0;j<Mat.Column;j++){
     		for(int i=0;i<Mat.Row;i++){
     			result.Matrix[j][i]=Mat.Matrix[i][j];
     		}
     	} 
     
     return result;
}
mtrx R(mtrx Mat){
     mtrx result;
     if (det(Mat)!=0){
     result=InitZero(Mat.Row,Mat.Column);
     mtrx A=AlgdopMatrix(Mat);
     A=Tr(A);
     
     	for(int j=0;j<Mat.Column;j++){
     		for(int i=0;i<Mat.Row;i++){
     			result.Matrix[j][i]=A.Matrix[j][i]*(1/(det(Mat)));
     		}
     	} 
     
     return result;}else{result.Succes=false; return result;}
}
bool getMatrix(float **matrix,int ncolumns,int nrows){


	for(int j=0;j<nrows;j++){
                   		string newrow;	
	       getline(cin,newrow);
	       istringstream stream(newrow);
	       for(int i=0;i<ncolumns;i++){
	       	if(!(stream>>matrix[j][i])){
	       		return false;
	       	}
	       }
	}
	return true;
	
}

void coutMatrix(mtrx Matsign){
	for(int j=0;j<Matsign.Row;j++){
	       for(int i=0;i<Matsign.Column;i++){
	       	if(Matsign.Matrix[j][i]==-0){
	       		Matsign.Matrix[j][i]=0;
	       	}
	       	cout<<Matsign.Matrix[j][i]<<"\t";
	       }cout<<"\n";
	}
}
mtrx getfullMatrix(){
mtrx result;
float **matrix;
string header;
int rows;
int columns;
        char razdel;
       getline(cin,header);
        istringstream str(header);
        if((str>>rows)&&(str>>razdel)&&(str>>columns)&&(razdel==',')){
     matrix = new float *[ rows];
for(  int i = 0; i < rows; ++i ) {
    matrix[ i ] = new float[ columns];
for( int j = 0; j < columns; ++j ) {
        matrix[ i ][ j ] = 0.0f;
    }
}result.Succes=getMatrix(matrix,columns,rows);result.Row=rows;result.Column=columns;result.Matrix=matrix;return result;}result.Succes=false;return result;}
int main(){


  }
