class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                {
                    ServerSocket VAR3 = null;
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    
                    try
                    {
                        VAR3 = new FUN2(39543);
                        VAR4 = VAR3.accept();
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                int VAR12;
                try
                {
                    VAR12 = VAR13.parseInt(VAR2);
                }
                catch (NumberFormatException VAR14)
                {
                    VAR8.writeLine("");
                    VAR12 = 1;
                }
                for (int VAR15=0; VAR15 < VAR12; VAR15++)
                {
                    
                    VAR8.writeLine("");
                }
                break;
            default:
                
                VAR8.writeLine("");
                break;
            }
        }
};