//
//  SGNullabilitySwift.swift
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/2/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

import UIKit

class SGNullabilitySwift: NSObject {
    
    var myVar : NSString!
    var myOptionalVar : NSString?
    
    override init() {
        super.init()
        
//        var nullabilityObjCMacros = SGNullabilityObjCMacros(nullableString: <#T##String?#>, noNullableNumber: <#T##NSNumber#>)
//        var nullabilityObjCWithoutMacros = SGNullabilityObjCWithoutMacros(nullableString: <#T##String?#>, noNullableNumber: <#T##NSNumber#>)
//        var nullabilityObjCWithoutLove = SGNullabilityObjCWithoutLove(nullableString: <#T##String!#>, noNullableNumber: <#T##NSNumber!#>)
        
        var optionalString : String?
        var optionalNumber : NSNumber?
        
        let nullabilityObjCMacros = SGNullabilityObjCMacros(nullableString: optionalString, noNullableNumber: optionalNumber!)
        let nullabilityObjCWithoutMacros = SGNullabilityObjCWithoutMacros(nullableString: optionalString, noNullableNumber: optionalNumber!)
        let nullabilityObjCWithoutLove = SGNullabilityObjCWithoutLove(nullableString: optionalString, noNullableNumber: optionalNumber)
        
        print("%@, %@, %@", nullabilityObjCMacros, nullabilityObjCWithoutMacros, nullabilityObjCWithoutLove!)
    }
}
