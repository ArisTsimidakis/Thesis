class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3)
            {
                VAR2 = VAR4.VAR5; 
                {
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
                    
                    try
                    {
                        VAR6 = new InputStreamReader(System.in, "");
                        VAR7 = new BufferedReader(VAR6);
                        
                        String VAR8 = VAR7.readLine();
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3)
            {
                
                int VAR15[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 >= 0 && VAR2 < VAR15.length)
                {
                    VAR15[VAR2] = 42;
                }
                else
                {
                    VAR10.writeLine("");
                }
            }
        }
};