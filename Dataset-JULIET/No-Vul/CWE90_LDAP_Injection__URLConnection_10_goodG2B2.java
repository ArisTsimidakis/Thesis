class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR5<String, String> VAR6 = new VAR5<String, String>();
            VAR6.FUN2(VAR7.VAR8,"");
            VAR6.FUN2(VAR7.VAR9, "VAR10:
            DirContext VAR11 = null;
    
            try
            {
                VAR11 = new FUN3(VAR6);
                
                String VAR12 = "" + VAR2 + "";
    
                VAR13<VAR14> VAR15 = VAR11.FUN4("", VAR12, null);
                while (VAR15.FUN5())
                {
                    SearchResult VAR16 = VAR15.next();
                    Attributes VAR17 = VAR16.FUN6();
                    VAR13<?> VAR18 = VAR17.FUN7();
                    while (VAR18.FUN5())
                    {
                        Attribute VAR19 = (VAR20) VAR18.next();
                        VAR13<?> VAR21 = VAR19.FUN7();
                        while(VAR21.FUN5())
                        {
                            VAR3.writeLine("" + VAR21.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR22)
            {
                VAR3.VAR23.log(VAR24.VAR25, "", VAR22);
            }
            finally
            {
                if (VAR11 != null)
                {
                    try
                    {
                        VAR11.close();
                    }
                    catch (NamingException VAR22)
                    {
                        VAR3.VAR23.log(VAR24.VAR25, "", VAR22);
                    }
                }
            }
    
        }
};