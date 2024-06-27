class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2)
            {
                FileOutputStream VAR3 = null;
                try
                {
                    String VAR4 = "";
                    File VAR5 = new File(VAR4);
                    VAR3 = new FileOutputStream(VAR5);
                    VAR3.write("".getBytes(""));
                    
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