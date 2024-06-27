static VAR1 FUN1(const MagickOffsetType VAR2,
  const int VAR3,void *VAR4)
{
  VAR5
    *VAR6;

  VAR6=(VAR5 *) VAR4;
  switch (VAR3)
  {
    case VAR7:
    default:
    {
      if (VAR2 < 0)
        return(-1);
      VAR6->VAR2=VAR2;
      break;
     }
     case VAR8:
     {












       if ((VAR6->VAR2+VAR2) < 0)
         return(-1);
       VAR6->VAR2+=VAR2;
      break;
    }
    case VAR9:
    {
      if (((VAR1) VAR6->VAR10+VAR2) < 0)
        return(-1);
      VAR6->VAR2=VAR6->VAR10+VAR2;
      break;
    }
  }

  return(VAR6->VAR2);
}