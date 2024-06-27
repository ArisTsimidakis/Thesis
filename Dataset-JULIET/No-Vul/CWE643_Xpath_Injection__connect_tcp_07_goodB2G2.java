class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
                        
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
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3==5)
            {
                String VAR12 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
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
                    if( VAR13.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR14 = VAR15.FUN3(VAR13[0]);
                    String VAR16 = VAR15.FUN3(VAR13[1]);
                    
                    XPath VAR17 = VAR18.FUN4().FUN5();
                    InputSource VAR19 = new FUN6(VAR12);
                    String VAR20 = "
                                   "" + VAR16 + "" +
                                   "";
                    String VAR21 = (String)VAR17.FUN7(VAR20, VAR19, VAR22.VAR23);
                }
            }
        }
};