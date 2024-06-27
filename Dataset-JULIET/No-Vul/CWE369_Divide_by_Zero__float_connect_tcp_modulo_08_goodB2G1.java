class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                VAR2 = -1.0f; 
                
                {
                    Socket VAR3 = null;
                    BufferedReader VAR4 = null;
                    InputStreamReader VAR5 = null;
                    try
                    {
                        
                        VAR3 = new Socket("", 39544);
                        
                        VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR4 = new BufferedReader(VAR5);
                        
                        String VAR6 = VAR4.readLine();
                        if (VAR6 != null) 
                        {
                            try
                            {
                                VAR2 = VAR7.FUN3(VAR6.trim());
                            }
                            catch(NumberFormatException VAR8)
                            {
                                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                            }
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                        catch (IOException VAR13)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
    
                        
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN4())
            {
                
                VAR9.writeLine("");
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR14 = (int)(100.0 % VAR2);
                    VAR9.writeLine(VAR14);
                }
                else
                {
                    VAR9.writeLine("");
                }
    
            }
        }
};