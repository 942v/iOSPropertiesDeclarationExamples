//
//  SGSettersGetters.swift
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 8/31/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

import UIKit

class SGSettersGetters: NSObject {
    
    //////////////////////////////////////////////////////
    // In swift we don't have the same backing storage  //
    // as iVars like in ObjC, so that's why if we want  //
    // to mimic the setters & getters behavior we need  //
    // to create a private backing variable.            //
    //////////////////////////////////////////////////////
    private var _myString: String?

    var myString: String? {
//        set {
//            _myString = newValue
//        }
        set(newMyString) {
            _myString = newMyString
        }
        get {
            return _myString
        }
        //////////////////////////////////////////////////////
        // As a note aside we can also use property         //
        // observers willSet and didSet, also remember that //
        // you can use oldValue and newValue in the set,    //
        // get, willSet, didSet and you can also rename     //
        // those values for each function.                  //
        // For more information regarding properties in     //
        // swift check this doc:                            //
        // https://docs.swift.org/swift-book/LanguageGuide/Properties.html#//apple_ref/doc/uid/TP40014097-CH14-ID262 //
        //////////////////////////////////////////////////////
//        didSet {
//        }
//        willSet {
//        }
    }
    
    override init() {
        
        super.init()
        
        // I've added self just to make it clear that we are using the setters and not the fake accesor iVar
        self.myString = "My string by setters"
        
        print("ivar _myString: %@", _myString ?? "");
        print("getter myString: %@", self.myString ?? "");
        
        _myString = "My string by ivar";
        
        print("getter myString: %@", self.myString ?? "");
        print("ivar _myString: %@", _myString ?? "");
    }
}
