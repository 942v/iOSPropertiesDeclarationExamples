//
//  SGPropertyAttributes.h
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/1/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

@import Foundation;

//////////////////////////////////////////
// Cheat table                          //
//////////////////////////////////////////
// Atomicity:                           //
// atomic       |   nonatomic           //
// ------------------------------------ //
// Memory Management:                   //
// strong       |   weak                //
// copy         |   assign              //
// retain       |   unsafe_unretained   //
// ------------------------------------ //
// Writability:                         //
// readwrite    |   readonly            //
// ------------------------------------ //
// Custom Setters and getters for auto  //
// synthesize:                          //
// getter=      |   setter=             //
//////////////////////////////////////////

@interface SGPropertyAttributes : NSObject

@property (atomic) id atomicVariable;
@property (nonatomic) id nonAtomicVariable;

@property (strong) id strongVariable;
@property (weak) id weakVariable;

@property (readwrite) id readwriteVariable;
@property (readonly) id readonlyVariable;

@property (getter=myCustomGetterVariable) id customGetterVariable;
@property (setter=myCustomSetterVariable:) id customSetterVariable;

@property (copy) id copiedVariable;
@property (assign) BOOL primitiveVariable;

@property (retain) id retainVariable;
@property (unsafe_unretained) id unsafe_unretainedVariable;

@end
