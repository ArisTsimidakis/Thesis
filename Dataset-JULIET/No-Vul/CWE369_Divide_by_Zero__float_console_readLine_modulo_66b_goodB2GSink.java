class VAR1{
    public void FUN1(float VAR2[] ) throws Throwable
        {
            float VAR3 = VAR2[2];
    
            
            if (Math.abs(VAR3) > 0.000001)
            {
                int VAR4 = (int)(100.0 % VAR3);
                VAR5.writeLine(VAR4);
            }
            else
            {
                VAR5.writeLine("");
            }
    
        }
};