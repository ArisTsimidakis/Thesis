template<typename VAR1> const VAR1 FUN1(
      const VAR2::VAR3<VAR1>& VAR4, const VAR2::VAR5& VAR6) const {
    typedef typename VAR2::VAR3<VAR1>::const_iterator VAR7;
    iter_t VAR8 = VAR2::FUN2(VAR4.FUN3(), VAR4.FUN4(),
                               VAR9::FUN5(VAR6));
    return (VAR8 != VAR4.FUN4()) ? *VAR8 : NULL;
  }