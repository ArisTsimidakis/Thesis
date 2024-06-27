class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
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
    
            String VAR12 = null;
            if(System.FUN3("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR12 = "";
            }
            else
            {
                
                VAR12 = "";
            }
    
            if (VAR2 != null)
            {
                
                String [] VAR13 = VAR2.split("");
                if (VAR13.length < 2)
                {
                    return;
                }
                String VAR14 = VAR13[0];
                String VAR15 = VAR13[1];
                
                XPath VAR16 = VAR17.FUN4().FUN5();
                InputSource VAR18 = new FUN6(VAR12);
                
                
                String VAR19 = "
                               "" + VAR15 + "" +
                               "";
                String VAR20 = (String)VAR16.FUN7(VAR19, VAR18, VAR21.VAR22);
            }
    
        }
};