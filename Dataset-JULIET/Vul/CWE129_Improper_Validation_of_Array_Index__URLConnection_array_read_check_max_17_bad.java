class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            
    
            VAR2 = VAR3.VAR4; 
    
            
            {
                URLConnection VAR5 = (new FUN2("VAR6:
                BufferedReader VAR7 = null;
                InputStreamReader VAR8 = null;
    
                try
                {
                    VAR8 = new InputStreamReader(VAR5.getInputStream(), "");
                    VAR7 = new BufferedReader(VAR8);
    
                    
                    
                    String VAR9 = VAR7.readLine();
    
                    if (VAR9 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR9.trim());
                        }
                        catch (NumberFormatException VAR10)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                        }
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
            }
    
            for (int VAR16 = 0; VAR16 < 1; VAR16++)
            {
                
                int VAR17[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 < VAR17.length)
                {
                    VAR11.writeLine(VAR17[VAR2]);
                }
                else
                {
                    VAR11.writeLine("");
                }
            }
        }
};