class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                String VAR3 = "";
                byte[] VAR4 = new byte[VAR3.length()];
                
                VAR3.getBytes(0, VAR3.length(), VAR4, 0);
                VAR2.writeLine(VAR2.FUN3(VAR4)); 
            }
            else
            {
    
                String VAR3 = "";
    
                
                byte[] VAR4 = VAR3.getBytes("");
    
                VAR2.writeLine(VAR2.FUN3(VAR4)); 
    
            }
        }
};