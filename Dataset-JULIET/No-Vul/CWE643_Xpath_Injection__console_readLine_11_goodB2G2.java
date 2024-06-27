class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN2())
            {
                String VAR10 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR10 = "";
                }
                else
                {
                    
                    VAR10 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR11 = VAR2.split("");
                    if( VAR11.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR12 = VAR13.FUN4(VAR11[0]);
                    String VAR14 = VAR13.FUN4(VAR11[1]);
                    
                    XPath VAR15 = VAR16.FUN5().FUN6();
                    InputSource VAR17 = new FUN7(VAR10);
                    String VAR18 = "
                                   "" + VAR14 + "" +
                                   "";
                    String VAR19 = (String)VAR15.FUN8(VAR18, VAR17, VAR20.VAR21);
                }
            }
        }
};