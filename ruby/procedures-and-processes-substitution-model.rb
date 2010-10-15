# Procedures and Processes; Substitution Model Lecture
class PPSM
  class << self

    def sum( x, y )
      return y if x === 0.to_i
      x += 1
      y -= 1
      return x + y
    end

    def fib( n )
      return n if n < 2
      first = n - 1
      second = n - 2
      return fib(first) + fib(second)
    end

    # Sum of Sqr
    def sos( x, y )
      x = sq(x)
      y = sq(y)
      x + y
    end

    protected
    
    # square root
    def sq(n)
      n * n
    end

  end#self

end#PPSM
