class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
    
            VAR2 = ""; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
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
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                String VAR13 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR14 = VAR2.split("");
                    if (VAR14.length < 2)
                    {
                        return;
                    }
                    String VAR15 = VAR14[0];
                    String VAR16 = VAR14[1];
                    
                    XPath VAR17 = VAR18.FUN4().FUN5();
                    InputSource VAR19 = new FUN6(VAR13);
                    
                    
                    String VAR20 = "
                                   "" + VAR16 + "" +
                                   "";
                    String VAR21 = (String)VAR17.FUN7(VAR20, VAR19, VAR22.VAR23);
                }
            }
        }
};