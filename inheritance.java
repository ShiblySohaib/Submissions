





                public class parent {
                    String sentence="parent attribute.";
                    void print(){
                        System.out.println("parent method.");
                    }
                }

                class child extends parent{
                    public static void main(String[]args){
                        child obj=new child();
                        System.out.println(obj.sentence);
                        obj.print();
                    }
                }





                                                                                              
                public class parent {                                               public class parent{
                    String sentence="parent attribute.";                                 String sentence="parent_2 attribute.";
                    void print(){                                                        void print(){
                        System.out.println("parent method.");                                System.out.println("parent_2 method.);
                    }                                                                    }
                }                                                                   }

                                                                                                                
                                                                                                                
                                          class child extends parent,parent_2{
                                              public static void main(String[]args){
                                                  child obj=new child();
                                                  System.out.println(obj.sentence);
                                                  obj.print();
                                              }
                                          }
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
