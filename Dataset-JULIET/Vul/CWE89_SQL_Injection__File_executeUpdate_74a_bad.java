class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
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
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            HashMap<VAR12,String> VAR13 = new HashMap<VAR12,String>();
            VAR13.FUN2(0, VAR2);
            VAR13.FUN2(1, VAR2);
            VAR13.FUN2(2, VAR2);
            (new FUN3()).FUN4(VAR13  );
        }
};