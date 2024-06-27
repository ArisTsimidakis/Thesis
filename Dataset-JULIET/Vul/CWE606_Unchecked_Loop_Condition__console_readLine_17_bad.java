class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
    
            VAR2 = ""; 
    
            {
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
    
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                int VAR11;
                try
                {
                    VAR11 = VAR12.parseInt(VAR2);
                }
                catch (NumberFormatException VAR13)
                {
                    VAR6.writeLine("");
                    VAR11 = 1;
                }
                for (int VAR14=0; VAR14 < VAR11; VAR14++)
                {
                    
                    VAR6.writeLine("");
                }
            }
        }
};