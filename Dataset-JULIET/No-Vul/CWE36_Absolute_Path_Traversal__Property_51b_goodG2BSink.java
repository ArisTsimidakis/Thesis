class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
    
            
            if (VAR2 != null)
            {
                File VAR3 = new File(VAR2);
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
                if (VAR3.exists() && VAR3.isFile())
                {
                    try
                    {
                        VAR4 = new FileInputStream(VAR3);
                        VAR5 = new InputStreamReader(VAR4, "");
                        VAR6 = new BufferedReader(VAR5);
                        VAR7.writeLine(VAR6.readLine());
                    }
                    catch (IOException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
    
        }
};