class VAR1{
    public void FUN1() throws Throwable
        {
    
            String VAR2 = "";
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
    
            ServerSocket VAR12 = null;
            Socket VAR13 = null;
            OutputStreamWriter VAR14 = null;
            BufferedWriter VAR15 = null;
    
            try
            {
                
                VAR12 = new FUN2(39543);
                VAR13 = VAR12.accept();
    
                VAR14 = new FUN3(VAR13.getOutputStream(), "");
                VAR15 = new BufferedWriter(VAR14);
    
                
                if (VAR2 != null)
                {
                    VAR15.write(VAR2);
                }
            }
            catch (IOException VAR7)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
            }
            finally
            {
                
                try
                {
                    if (VAR15 != null )
                    {
                        VAR15.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
    
                try
                {
                    if (VAR14 != null )
                    {
                        VAR14.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
    
                
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
    
                try
                {
                    if (VAR12 != null)
                    {
                        VAR12.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
            }
    
        }
};