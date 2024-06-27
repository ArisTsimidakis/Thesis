class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = 0.0f; 
                break;
            default:
                
                VAR2 = 0.0f;
                break;
            }
    
            switch (7)
            {
            case 7:
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR3 = (int)(100.0 / VAR2);
                    VAR4.writeLine(VAR3);
                }
                else
                {
                    VAR4.writeLine("");
                }
                break;
            default:
                
                VAR4.writeLine("");
                break;
            }
        }
};