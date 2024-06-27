class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                {
                    File VAR6 = new File("");
                    FileInputStream VAR7 = null;
                    InputStreamReader VAR8 = null;
                    BufferedReader VAR9 = null;
                    try
                    {
                        
                        VAR7 = new FileInputStream(VAR6);
                        VAR8 = new InputStreamReader(VAR7, "");
                        VAR9 = new BufferedReader(VAR8);
                        
                        
                        String VAR10 = VAR9.readLine();
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR10.trim());
                            }
                            catch(NumberFormatException VAR11)
                            {
                                VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if(VAR3.FUN2())
            {
                
                int VAR16 = (int)(--VAR2);
                VAR3.writeLine("" + VAR16);
            }
        }
};