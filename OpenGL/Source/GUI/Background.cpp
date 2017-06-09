#include "Background.h"
#include "../Display.h"
#include "../Renderer/RMaster.h"

namespace GUI
{
    //Using SFML To render in Textures whilst using a Unique Pointer for the textures
    Background::Background(const sf::Texture& texture)
    {
            //Using the FLOAT Function for the Display this is to get the size of the X AND Y AXIS
        m_quad.setSize({static_cast<float>(Display::get().getSize().x),
                        static_cast<float>(Display::get().getSize().y)});
        m_quad.setTexture(&texture);
    }
    //Using the RenderMaster Class to draw out the background
    void Background::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
