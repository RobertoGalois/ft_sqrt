int     ft_sqrt(int nb) 
{
    int     bool_found;
    int     l_sqrt;
    int     r_sqrt;
    int     m_sqrt;
    int     m_sqrt_square;

    bool_found = 0;
    l_sqrt = 0;
    r_sqrt = nb - 1;
    m_sqrt = 0;
    
    if (nb == 1)
        m_sqrt = 1;
    
    else
    {
        while ((l_sqrt <= r_sqrt) && (bool_found == 0)) 
        {   
            m_sqrt = (int)((l_sqrt + r_sqrt) / 2); 
            m_sqrt_square = (m_sqrt * m_sqrt);

            if (m_sqrt_square == nb) 
                bool_found = 1;

            else
            {
                if (m_sqrt_square < nb) 
                    l_sqrt = m_sqrt + 1;

                else
                    r_sqrt = m_sqrt - 1;
            }
        }   

        if (bool_found == 0)
            m_sqrt = 0;
    }
    
    return (m_sqrt);
}
