class VAR1{
    public void FUN1() throws Throwable
        {
    
            File VAR2 = null;
            FileInputStream VAR3 = null;
            InputStreamReader VAR4 = null;
            BufferedReader VAR5 = null;
    
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR2 = new File("");
            }
            else
            {
                
                VAR2 = new File("");
            }
    
            try
            {
                VAR3 = new FileInputStream(VAR2);
                VAR4 = new InputStreamReader(VAR3, "");
                VAR5 = new BufferedReader(VAR4);
            }
            catch (FileNotFoundException VAR6)
            {
                
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
};