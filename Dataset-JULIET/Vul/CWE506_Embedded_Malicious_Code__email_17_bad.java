class VAR1{
    public void FUN1() throws Throwable
        {
            for (int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                Properties VAR3 = new Properties();
                Session VAR4 = VAR5.FUN2(VAR3, null);
                String VAR6 = "";
                try
                {
                    Message VAR7 = new FUN3(VAR4); 
                    VAR7.FUN4(new FUN5(""));
                    VAR7.FUN6(VAR8.VAR9.VAR10, new FUN5(""));
                    VAR7.FUN7("");
                    VAR7.FUN8(VAR6);
                    
                    VAR11.FUN9(VAR7);
                }
                catch (AddressException VAR12)
                {
                    
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
                catch (MessagingException VAR17)
                {
                    
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR17);
                }
            }
        }
};