/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package root;

public class JnitestC {
  public static void myfunc() {
    JnitestCJNI.myfunc();
  }

  public static void myfunc_name(String name) {
    JnitestCJNI.myfunc_name(name);
  }

  public static String myfunc_name_return(String name) {
    return JnitestCJNI.myfunc_name_return(name);
  }

  public static void pass_array(SWIGTYPE_p_int intarray, int size) {
    JnitestCJNI.pass_array(SWIGTYPE_p_int.getCPtr(intarray), size);
  }

  public static void pass_array2(SWIGTYPE_p_int intarray, int size) {
    JnitestCJNI.pass_array2(SWIGTYPE_p_int.getCPtr(intarray), size);
  }

  public static SWIGTYPE_p_int receive_array() {
    long cPtr = JnitestCJNI.receive_array();
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static void print_array(int size) {
    JnitestCJNI.print_array(size);
  }

  public static void printSomeStruct(SomeStruct someStruct) {
    JnitestCJNI.printSomeStruct(SomeStruct.getCPtr(someStruct), someStruct);
  }

  public static void printStructArray(SWIGTYPE_p_p_SomeStruct someStruct, int arraySize) {
    JnitestCJNI.printStructArray(SWIGTYPE_p_p_SomeStruct.getCPtr(someStruct), arraySize);
  }

  public static void print_pointer_to_int_array(SWIGTYPE_p_p_long ppint, int size) {
    JnitestCJNI.print_pointer_to_int_array(SWIGTYPE_p_p_long.getCPtr(ppint), size);
  }

  public static void printStructWithArray(StructWithArray structWithArray) {
    JnitestCJNI.printStructWithArray(StructWithArray.getCPtr(structWithArray), structWithArray);
  }

  public static void printLearnParm(SWIGTYPE_p_LEARN_PARM learnParm) {
    JnitestCJNI.printLearnParm(SWIGTYPE_p_LEARN_PARM.getCPtr(learnParm));
  }

  public static void printDoc(SWIGTYPE_p_DOC doc) {
    JnitestCJNI.printDoc(SWIGTYPE_p_DOC.getCPtr(doc));
  }

  public static void printWord(SWIGTYPE_p_WORD word) {
    JnitestCJNI.printWord(SWIGTYPE_p_WORD.getCPtr(word));
  }

  public static void printSvector(SWIGTYPE_p_SVECTOR vector) {
    JnitestCJNI.printSvector(SWIGTYPE_p_SVECTOR.getCPtr(vector));
  }

  public static void printDocArray(SWIGTYPE_p_p_DOC doc, int numDocs) {
    JnitestCJNI.printDocArray(SWIGTYPE_p_p_DOC.getCPtr(doc), numDocs);
  }

}