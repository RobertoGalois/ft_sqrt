int     ft_sqrt(int nb) 
{
    int     ret;
    int     bool_found;

    ret = 0;
    bool_found = 0;

    if (nb == 1)
        ret = 1;

    else if (nb > 1)
    {   
        while ((ret <= (nb / 2)) && (bool_found == 0)) 
        {
            if ((ret * ret) == nb) 
                bool_found = 1;

            else
                ret++;
        }

        if (bool_found == 0)
            ret = 0;
    }   

        return (ret);
}
