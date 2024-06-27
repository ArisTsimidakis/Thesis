class VAR1{
    public void FUN1(HashMap<VAR2,String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.get(2);
    
            VAR5<String, String> VAR6 = new VAR5<String, String>();
            VAR6.FUN2(VAR7.VAR8,"");
            VAR6.FUN2(VAR7.VAR9, "VAR10:
            DirContext VAR11 = null;
    
            try
            {
                VAR11 = new FUN3(VAR6);
                
                String VAR12 = "" + VAR4 + "";
    
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
                            VAR22.writeLine("" + VAR21.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR23)
            {
                VAR22.VAR24.log(VAR25.VAR26, "", VAR23);
            }
            finally
            {
                if (VAR11 != null)
                {
                    try
                    {
                        VAR11.close();
                    }
                    catch (NamingException VAR23)
                    {
                        VAR22.VAR24.log(VAR25.VAR26, "", VAR23);
                    }
                }
            }
    
        }
};