class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                int VAR3 = (new FUN3()).nextInt(3);
                String VAR4;
                switch (VAR3)
                {
                case 1:
                    VAR4 = "";
                    break;
                case 2:
                    VAR4 = ""; 
                    
                default:
                    VAR4 = "";
                    break;
                }
                VAR2.writeLine(VAR4);
            }
            else
            {
    
                int VAR3 = (new FUN3()).nextInt(3);
                String VAR4;
    
                switch (VAR3)
                {
                case 1:
                    VAR4 = "";
                    break;
                case 2:
                    VAR4 = "";
                    break; 
                default:
                    VAR4 = "";
                    break;
                }
    
                VAR2.writeLine(VAR4);
    
            }
        }
};