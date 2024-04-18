#include "ball.h"

using namespace std;

Ball::Ball(const LoaderParams* pParams):
    SDLGameObject(pParams)
{

}
void Ball::draw(double ti_le, int type_flip)
{
    SDLGameObject::draw(ti_le, type_flip);
}

void Ball::update()
{
    //cout<<m_position.getX()<<" "<<m_position.getY()<<"\n";

}


int Ball::get_currentframe()
{
    return m_currentFrame;
}

void Ball::set_currentframe(int I)
{
    m_currentFrame = I;
}

Vector2D Ball::get_position()
{
    return m_position;
}

void Ball::set_position(Vector2D new_position)
{
    m_position = new_position;
}
void Ball::clean()
{
    SDLGameObject::clean();
}

double Ball::get_hit(Vector2D ID)
{
    Vector2D A = m_position - ID;
    return A.length();
}
