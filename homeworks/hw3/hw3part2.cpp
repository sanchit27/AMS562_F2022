#include <cmath>
#include <cstdlib>
#include <ctime>  // for trigger the seed of random number generator
#include <iostream>

static void genPointsOnUnitSphere(const int N, float *x, float *y, float *z);
using namespace std;

int main(int argc, char *argv[]) {
  // parse input argc/argv

  

  // get the size of N
  int N = atoi(argv[1]);;

  float *x = nullptr, *y = nullptr, *z = nullptr;

 

  //float val= acos();


  // allocate memory for x, y, z
  
  x= new float[N];
  y= new float[N];
  z=new float[N];

  genPointsOnUnitSphere(N, x, y, z);

  float minimum=__FLT_MAX__;
  float maximum= __FLT_MIN__;
  float xmin;
  float ymin;
  float zmin;
  float xmax;
  float ymax;
  float zmax;
  
  cout<<"x"<<x[0];
  cout<<"x"<<y[0];
  cout<<"x"<<z[0];


  // determine the extreme arc lengths
for(int i=0;i<N;i++)
  {
    float length=acos((x[0]*x[i]+y[0]*y[i]+z[0]*z[i]/sqrt(x[0] * x[i] + y[0] * y[i] + z[0] * z[i])));
    if(minimum>length)
    {
        minimum=length;
        xmin=x[i];
        ymin=y[i];
        zmin=z[i];

    }
    if(maximum<length)
    {
        maximum=length;
        xmax=x[i];
        ymax=y[i];
        zmax=z[i];

    }
  }
  cout<<"minimum "<<minimum<<endl;
  cout<<"minimum x "<<xmin<<endl;
  cout<<"minimum y "<<ymin<<endl;
  cout<<"minimum z "<<zmin<<endl;
  
  cout<<"maximum "<<maximum<<endl;
  cout<<"maximum x "<<xmax<<endl;
  cout<<"maximum y "<<ymax<<endl;
  cout<<"maximum z "<<zmax<<endl;


  // relax memory
  delete[] x;
  delete[] y;
  delete[] z;

  return 0;
}

// black-box function to generate a collection of random points
void genPointsOnUnitSphere(const int N, float *x, float *y, float *z) {
  if (x == nullptr || y == nullptr || z == nullptr || N <= 0) {
    std::cerr << "invalid pointers or size, aborting...\n";
    std::exit(1);
  }
  std::srand(std::time(0));  // trigger the seed
  const int BD = 10000000, BD2 = 2 * BD;
  const float inv_bd = 1.0f / BD;  // not integer division
  for (int i = 0; i < N; ++i) {
    x[i] = (std::rand() % BD2 - BD) * inv_bd;
    y[i] = (std::rand() % BD2 - BD) * inv_bd;
    z[i] = (std::rand() % BD2 - BD) * inv_bd;
    const float len = std::sqrt(x[i] * x[i] + y[i] * y[i] + z[i] * z[i]);
    if (len > 1e-5f) {
      // project on to unit sphere
      x[i] /= len;
      y[i] /= len;
      z[i] /= len;
    } else {
      // too close to zero
      // directly set the point to be (1,0,0)
      x[i] = 1.0f;
      y[i] = z[i] = 0.0f;
    }
  }
 
}
