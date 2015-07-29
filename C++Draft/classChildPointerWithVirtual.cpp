#include <cstdio>
class CParent 
{
    public: virtual void Intro()
    {
        printf( "I'm a Parent, " ); Hobby();
    }
    virtual void Hobby()
    {
        printf( "I like football!" );
    }
}; 
class CChild : public CParent { 
    public: virtual void Intro()
    {
        printf( "I'm a Child, " ); Hobby();
    }
    virtual void Hobby()
    {
       printf( "I like basketball!\n" );
    }
}; 
int main( void )
{
    CChild *pChild = new CChild(); 
    CParent *pParent = (CParent *) pChild; 
    pParent->Intro(); 
    return(0);
}
