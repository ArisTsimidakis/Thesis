class VAR1{
    public void FUN1(HashMap<VAR2,String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.get(2);
    
            int VAR5;
            try
            {
                VAR5 = VAR2.parseInt(VAR4);
            }
            catch (NumberFormatException VAR6)
            {
                VAR7.writeLine("");
                VAR5 = 1;
            }
    
            for (int VAR8=0; VAR8 < VAR5; VAR8++)
            {
                
                VAR7.writeLine("");
            }
    
        }
};