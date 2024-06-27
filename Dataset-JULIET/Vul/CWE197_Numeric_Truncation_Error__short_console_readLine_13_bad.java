class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
            if (VAR3.VAR4 == 5)
            {
                VAR2 = VAR5.VAR6; 
                {
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    
                    try
                    {
                        VAR7 = new InputStreamReader(System.in, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        String VAR9 = VAR8.readLine();
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.FUN2(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = 0;
            }
    
            {
                
                VAR3.writeLine((byte)VAR2);
            }
    
        }
};