class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                FileOutputStream VAR3 = null;
                try
                {
                    String VAR4 = "";
                    File VAR5 = new File(VAR4);
                    long lastModified = VAR5.lastModified();
                    VAR3 = new FileOutputStream(VAR5);
                    VAR3.write("".getBytes(""));
                    
                    
                    VAR5.FUN2(lastModified - 10000L);
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
        }
};