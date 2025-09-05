

class PhysicsWorld{
//to update the world
private:
std::vector<Object*> m_objects;
vec3 m_gravity = vec3(0,-9.81f,0);

public:
void AddObject (Object* object)  {/*......*/}  //for addition of some entity
void RemoveObject (Object* object)  {/*......*/}   //for removal/deletion of some entity

//step function for iteration each time over dt step for each obj
void Step(float dt)
{
    for(Object* obj : m_objects)
    {
        obj->Force += obj->Mass*m_gravity;  //apply a force  F= ma
        obj->Velocity += (obj->Force/obj->Mass)*dt;  //v = v0 + at;
        obj->Position += obj->Velocity*dt;   //x = x0 + vt;
        obj->Force = vec3(0,0,0);   //reset the force at the end
    }
}

};
