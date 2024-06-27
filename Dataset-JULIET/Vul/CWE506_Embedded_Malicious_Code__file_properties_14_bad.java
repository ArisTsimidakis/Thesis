class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                FileOutputStream VAR4 = null;
                try
                {
                    String VAR5 = "";
                    File VAR6 = new File(VAR5);
                    long lastModified = VAR6.lastModified();
                    VAR4 = new FileOutputStream(VAR6);
                    VAR4.write("".getBytes(""));
                    
                    
                    VAR6.FUN2(lastModified - 10000L);
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};