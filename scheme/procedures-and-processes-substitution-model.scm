;; procedures and Processes; Substitution Model Lecture

;; Additions
(define (+ x y)
  (if (= x 0)
      y
      (+ (-1+ x) (1+ y))))

(define (+ x y)
  (if (= x 0 )
      y
      (1+ (+ (-1+ x) y))))

;; Sum of Sqr
(define (sos x y)
  (+ (sq x) (sq y)))

;; Sqr
(define (sq x)
  (* x x))

;; Finbonacci
(define (fbn n)
  (if (< n 2)
      n
      (+ (fbn (- n 1))
         (fbn (- n 2)))))